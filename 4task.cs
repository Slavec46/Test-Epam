using System;
 
namespace Factorial
{
    class Program
    {
        public static long Factorial(int N)
        {
            long factotial = 1;
            if (N != 0)
            {
                for (int i = 2; i <= N; i++)
                {
                    factotial *= i;
                }
            }
            return factotial;
        }
 
        static void Main(string[] args)
        {
            Console.Write("Введите число N: ");
            int N = Int32.Parse(Console.ReadLine());
            if (N >= 0)
            {
                Console.WriteLine($"Факториал числа {N}: {Factorial(N)}");
            }
            else
            {
                Console.WriteLine("Было введено отрицательное число!");
            }
            Console.Write("Нажмите любую клавишу для выхода из программы...");
            Console.ReadKey();
        }
    }
}