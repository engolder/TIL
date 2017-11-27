using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Person
    {
        static public Person President = new Person("대통령");
        string _name;
        private Person(string name)
        {
            _name = name;
        }
        public void DisplayName()
        {
            Console.WriteLine(_name);
        }
    }    
    class Program
    {
        static void Main(string[] args)
        {
            Person.President.DisplayName();
        }
    }
}
