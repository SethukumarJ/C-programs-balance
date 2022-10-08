public class TextScanner {
    
    Hello obj;
    public TextScanner(Hello obj){
            this.obj = obj;
    }


    public void scan(){

        String text = "Text scanned";
        obj.onText(text);
    }
}
