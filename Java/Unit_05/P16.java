import java.util.*;
import java.awt.*;
public class P16 extends MouseMotionAdapter {
    Frame f;
    P16(){
        f=new Frame("Mouse Motion Adapter");
        f.addMouseMotionListener(this);
        f.setSize(300,300);
        f.setVisible(true);
        f.setLayout(null);
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindoeEvent e){
                f.dispose();
            }
        });

    }
    @Override
    public void mouseDragged(MouseEvent e){
        Graphics g=f.getGraphics();
        g.setColor(Color.RED);
        g.fillRect(e.getX(),e.getY(),5,5);
    }
    public static void main(String[] args) {
        new P16();
    }
}
