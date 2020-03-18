using System;
using System.Linq;
 
class Program
{
    static void Main(string[] args)
    {
 
     string lol = "Как переделать чтобы вывести только те слова, которые встречаются в Как тексте ровно один раз";
            var words = lol.Split(new[] {'.', ',', ' ', ';', ':', '!', '?'},
                StringSplitOptions.RemoveEmptyEntries);
 
            foreach (var w in words.Where(x=> words.Count(v=>v==x)==1)) 
            {
                Console.WriteLine(w);
            }
            Console.ReadLine();
    }
}