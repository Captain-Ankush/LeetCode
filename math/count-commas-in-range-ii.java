class Solution {
    public long countCommas(long n) {
        
        long total = 0;
        long start = 1000;
        long commas = 1;

        while (start <= n) {

            long end = start * 1000 - 1;

            if (end < start) {
                end = Long.MAX_VALUE;
            }

            long last = Math.min(n, end);

            total += (last - start + 1) * commas;

            start *= 1000;
            commas++;
        }

        return total;
    }
}