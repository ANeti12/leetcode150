class Solution {
    public int lengthOfLastWord(String s) {
        String[] stringList = s.split(" ");
        String result = stringList[stringList.length - 1];
        return result.length();
    }
}