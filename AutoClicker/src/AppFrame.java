import com.github.kwhat.jnativehook.GlobalScreen;
import com.github.kwhat.jnativehook.NativeHookException;

import javax.swing.*;
import java.awt.*;

public class AppFrame extends JFrame
{
    JButton startButton;
    JButton stopButton;
    JTextField clickCountField;

    Clicker clicker;

    public AppFrame()
    {
        this.setPreferredSize(new Dimension(400, 75));

        this.setLayout(new BorderLayout());

        JPanel settingsPanel = new JPanel();

        JLabel fieldLabel = new JLabel("Clicks per second");
        clickCountField = new JTextField(6);

        settingsPanel.add(fieldLabel);
        settingsPanel.add(clickCountField);

        JPanel controlsPanel = new JPanel();

        startButton = new JButton("Start (U)");
        stopButton = new JButton("Stop (U)");

        stopButton.setEnabled(false);

        startButton.addActionListener(new StartButtonListener(this));
        stopButton.addActionListener(new StopButtonListener(this));

        controlsPanel.add(startButton);
        controlsPanel.add(stopButton);

        this.add(settingsPanel, BorderLayout.WEST);
        this.add(controlsPanel, BorderLayout.EAST);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        this.pack();
    }

    public void Start()
    {
        startButton.setEnabled(false);
        stopButton.setEnabled(true);

        int waitTime = 500;

        try
        {
            waitTime = 1000 / (Integer.parseInt(clickCountField.getText()));
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }

        clicker = new Clicker(waitTime);
        clicker.start();
    }

    public void Stop()
    {
        startButton.setEnabled(true);
        stopButton.setEnabled(false);
        clicker.Stop();
    }
}