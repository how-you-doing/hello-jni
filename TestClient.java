public class TestClient {
    static {
        System.loadLibrary("printer");
    }

    public static void main(String[] args) {
        final MessagePrinter printer = new MessagePrinter();
        printer.printMsg("HelloWorld!");
    }
}
