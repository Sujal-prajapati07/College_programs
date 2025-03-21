import java.awt.*;
import java.applet.Applet;

public class Qu13_applet extends Applet
{
	public void paint(Graphics g)
	{
		g.drawRect(100,200,240,40);
		g.drawRect(100,250,240,40);
		g.drawOval(100,300,250,80);


		g.setColor(Color.BLACK);
		g.fillRect(400,200,240,40);
		g.fillRect(400,250,240,40);

		g.setColor(Color.RED);
		g.fillOval(400,300,250,80);
	}
}

/*<applet code="Qu13_applet.class" width="400" height="400"></applet>*/
