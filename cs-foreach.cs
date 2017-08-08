using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[] { 1, 2, 3, 4, 5 };
            //C#의 배열선언

            foreach(int elem in arr)
            {
                Console.WriteLine(elem);
            }
            //C#의 foreach문
        }
    }
}
