import java.awt.*;
import java.applet.Applet;

public class Qu12_applet extends Applet
{
	public void paint(Graphics g)
	{
		int[] x={100,50,150};
		int[] y={50,150,150};
		g.setColor(Color.GRAY);
		g.fillPolygon(x,y,3);
		g.setColor(Color.black);
		g.drawString("Triangle",80,180);

		g.setColor(Color.GRAY);
		g.fillRect(250,50,100,100);
		g.setFont(new Font("Arial",Font.BOLD,14));
		g.setColor(Color.black);
		g.drawString("Rectangle",270,180);
	}
}

/*<applet code="Qu12_applet.class" width="400" height="400"></applet>*/
