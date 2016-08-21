/*This is a game of getting ball from a box*/

public class getBallThread implements Runnable{
    private final static int boxSize = 1000;
    private static int ballIndex = 0;
    private int ballNum = 0;
    
    public boolean isFinish(){
        return ballIndex == boxSize;
    }
    public int getBallIndex(){
        return ballIndex++;
    }
    public int getBallNum(){
        return ballNum;
    }
    public void run(){
        while(!isFinish()){
            System.out.println(Thread.currentThread().getName()+" get the "+getBallIndex());
            ballNum++;
            try{
                Thread.sleep(5);
            }
            catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
