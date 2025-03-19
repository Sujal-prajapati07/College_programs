import java.applet.Applet;
import java.awt.*;

public class Applet4 extends Applet {
   
    public void init()
    {
        System.out.println("Hello");
    }

    public void start()
    {
        System.out.println("bye");
    }
    public void paint(Graphics g)
    {
        g.drawRect(100,200, 200, 100);
    }
}
/*
<applet code="Applet4.class" width=400 height=400>
</applet>
*/