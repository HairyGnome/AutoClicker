import com.github.kwhat.jnativehook.GlobalScreen;
import com.github.kwhat.jnativehook.NativeHookException;

import java.awt.*;

public class Application
{
    public static void main(String[] args)
    {
        AppFrame frame = new AppFrame();

        try
        {
            GlobalScreen.registerNativeHook();
        }
        catch (NativeHookException e)
        {
            e.printStackTrace();
        }

        GlobalScreen.addNativeKeyListener(new InputListener(frame));

        frame.setVisible(true);
    }
}
