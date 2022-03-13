import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class StopButtonListener implements ActionListener
{
    AppFrame frame;

    public StopButtonListener(AppFrame frame)
    {
        this.frame = frame;
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        frame.Stop();
    }
}