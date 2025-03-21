import java.awt.*;
import java.applet.Applet;

public class Qu10_applet extends Applet
{
	public void paint(Graphics g)
	{
		int[] x={115,50,180};
		int[] y={100,150,150};
		g.setColor(Color.red);
		g.fillPolygon(x,y,3);

		g.setColor(Color.blue);
		g.fillRect(75,150,80,120);

		g.setColor(Color.yellow);
		g.fillRect(90,180,10,10);//inner window
		g.fillRect(130,180,10,10);//inner window

		g.setColor(Color.black);
		g.fillRect(100,210,30,60);//door

		g.setColor(Color.white);
		g.fillOval(118,235,8,8);
	}
}

/*<applet code="Qu10_applet.class" width="400" height="400"></applet>*/
