// https://www.codewars.com/kata/5552101f47fc5178b1000050

class Main {
    public static void main(String[] agrs) {
        assert(1 == DigPow.digPow(89, 1));
        assert(-1 == DigPow.digPow(92, 1));
        assert(51 == DigPow.digPow(46288, 3));
    }
}

class DigPow {
    public static long digPow(int n, int p) {
        String nInStr = String.valueOf(n);
        long resNum = 0;
        
        for (int i = 0; i < nInStr.length(); ++i, ++p)
            resNum += (long)Math.pow(Character.getNumericValue(nInStr.charAt(i)), p);

        return resNum % n == 0 ? resNum / n : -1;
    }
}
