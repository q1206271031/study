public class Stock{
    private String symbol;
    private String name;
    private double previousClosingPrice;
    private double currentPrice ;
    public Stock( String symbol, String name){
        this.symbol=symbol;
        this.name=name;

    }
    public double getChangePercent(){
        return (currentPrice-previousClosingPrice)/previousClosingPrice;
    }



    public static void main(String[] args){
        Stock stock1=new Stock("1001","中石化");
        stock1.previousClosingPrice=100;
        stock1.currentPrice=123.8;
        double  ChangePercent=stock1.getChangePercent();
        System.out.println(ChangePercent*100+"%");
    }
} 