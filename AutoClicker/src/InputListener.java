import com.github.kwhat.jnativehook.*;
import com.github.kwhat.jnativehook.keyboard.NativeKeyEvent;
import com.github.kwhat.jnativehook.keyboard.NativeKeyListener;

import java.awt.*;

public class InputListener implements com.github.kwhat.jnativehook.keyboard.NativeKeyListener
{
    AppFrame frame;

    public InputListener(AppFrame frame)
    {
        this.frame = frame;
    }

    @Override
    public void nativeKeyTyped(NativeKeyEvent nativeEvent)
    {
        if(nativeEvent.getKeyChar() == 'u' || nativeEvent.getKeyChar() == 'U')
        {
            if(frame.startButton.isEnabled())
            {
                frame.Start();
            }
            else
            {
                frame.Stop();
            }
        }
    }
}
