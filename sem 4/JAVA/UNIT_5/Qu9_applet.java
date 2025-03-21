import java.awt.*;
import java.applet.Applet;

public class Qu9_applet extends Applet
{
	public void paint(Graphics g)
	{
		int[] x={250,320,400,340,370,250,130,160,100,180};
		int[] y={100,200,200,250,350,300,350,250,200,200};

		g.drawPolygon(x,y,10);
	}
}

/*<applet code="Qu9_applet.class" width="400" height="400"></applet>*/
