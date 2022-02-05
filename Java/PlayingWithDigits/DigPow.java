public class DigPow {
    public static long digPow(int n, int p) {
        String nInStr = String.valueOf(n);
        long resNum = 0;
        
        for (int i = 0; i < nInStr.length(); ++i, ++p)
            resNum += (long)Math.pow(Character.getNumericValue(nInStr.charAt(i)), p);

        return resNum % n == 0 ? resNum / n : -1;
    }
}