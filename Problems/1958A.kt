fun main() {
    repeat(readLine()!!.toInt()) {
        val n = readLine()!!.toInt()
        if(n == 1 || n == 4 || n == 7) { println(1) }
        else {
            if(n == 2) { println(2) }
            else { println(0) }
        }
    }
}
