using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cs
{
    public class Computer
    {
        protected bool powerOn;
        public void Boot() { }
        public void Shutdown() { }
        public void Reset() { }
    }
    public class Notebook : Computer
    {
        bool fingerScan;
        public bool HasFingerScanDevice() { return fingerScan; }

        public void CloseLid()
        {
            if(powerOn==true) //정상작동
            {
                Shutdown();
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Notebook noteBook = new Notebook();
            noteBook.Boot();
        }
    }
}
