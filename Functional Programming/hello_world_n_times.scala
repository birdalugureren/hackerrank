object Solution extends App {

def f(n: Int) = for (_ <- 1 to n) println("Hello World")


var n = scala.io.StdIn.readInt
  f(n)
}