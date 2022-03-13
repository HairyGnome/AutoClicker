import com.github.kwhat.jnativehook.*;
import jdk.jshell.spi.ExecutionControl;

import java.awt.*;
import java.awt.event.InputEvent;

public class Clicker extends Thread
{
    int waitTime;
    boolean run;

    public Clicker(int waitTime)
    {
        this.waitTime = waitTime;
        this.run = true;
    }

    public void Start() throws AWTException {
        Robot robot = new Robot();
        while(run)
        {
            try
            {
                robot.mousePress(InputEvent.BUTTON1_DOWN_MASK);
                robot.mouseRelease(InputEvent.BUTTON1_DOWN_MASK);
                sleep(waitTime);
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
    }

    @Override
    public void run()
    {
        try
        {
            Start();
        }
        catch(AWTException e)
        {
            e.printStackTrace();
        }
    }

    public void Stop()
    {
        this.run = false;
    }
}
