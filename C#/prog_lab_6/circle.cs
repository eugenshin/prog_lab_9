using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class circle
    {
        private point point;
        private double radius;
        public circle()
        {
            point = new point();
        }
        public void vvod()
        {
            Console.WriteLine("Введите координаты центра окружности.");
            point.vvod();
            Console.WriteLine("Введите длинну радиуса окружности.");
            while (!double.TryParse(Console.ReadLine(), out radius))
                Console.WriteLine("Радиус введен неверно.");
        }
        public void vivod()
        {
            Console.Write($"Центр окружности: ");
            point.vivod();
            Console.Write($" Радиус = {radius}");
            Console.WriteLine();
        }
        public double square()
        {
            return radius*radius*Math.PI;
        }
        public double per()
        {
            return 2*Math.PI*radius;
        }
    }
}
