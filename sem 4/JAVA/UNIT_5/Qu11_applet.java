import java.awt.*;
import java.applet.Applet;

public class Qu11_applet extends Applet
{
	public void paint(Graphics g)
	{
		g.setColor(Color.black);
		g.fillOval(102,102,185,185);
		g.setColor(Color.yellow);
		g.fillOval(104,104,180,180);

		g.setColor(Color.black);
		g.fillOval(137,145,30,30);
		g.fillOval(225,145,30,30);

		g.setColor(Color.cyan);
		g.fillArc(143,200,100,55,0,-180);
	}
}

/*<applet code="Qu11_applet.class" width="400" height="400"></applet>*/
