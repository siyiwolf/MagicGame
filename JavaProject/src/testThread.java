
public class testThread{
    public final static int THREADNUM = 5;
    public static void main(String [] args){
        System.out.println("Hello java thread");
        for(int i = 0; i < THREADNUM; i++){
            getBallThread ball = new getBallThread();
            Thread tBall = new Thread(ball);
            tBall.start();
        }
    }
}
