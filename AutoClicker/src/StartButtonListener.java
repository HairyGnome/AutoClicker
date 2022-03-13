import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class StartButtonListener implements ActionListener
{
    AppFrame frame;

    public StartButtonListener(AppFrame frame)
    {
        this.frame = frame;
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        frame.Start();
    }
}
