using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            point pt1 = new point(), pt2 = new point(1), pt3 = new point(2, 3);
            Console.Write("Первая точка - конструктор без параметров\t");
            pt1.vivod();
            Console.Write("\nВторая точка - конструктор с 1 параметром\t");
            pt2.vivod();
            Console.Write("\nТретья точка - конструктор с 2 параметрами\t");
            pt3.vivod();
            Console.WriteLine();
            segments sm = new segments(2);
            sm.totalvivod();
            Console.ReadLine();
        }
    }
}