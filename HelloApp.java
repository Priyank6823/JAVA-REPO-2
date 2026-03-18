public class HelloApp {

    public static void main(String[] args) {
        String finalNames;

        if (args.length > 0) {
            StringBuilder nameBuilder = new StringBuilder();

            for (int i = 0; i < args.length; i++) {
                nameBuilder.append(args[i]);

                if (i < args.length - 1) {
                    nameBuilder.append(", ");
                }
            }
            finalNames = nameBuilder.toString();
        } else {
            finalNames = "World";
        }

        System.out.println("Hello, " + finalNames + "!");
    }
}

UC4
