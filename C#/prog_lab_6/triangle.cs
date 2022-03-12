using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class triangle
    {
        private point ftpoint, sdpoint, tdpoint;
        public triangle()
        {
            ftpoint = new point();
            sdpoint = new point();
            tdpoint = new point();
        }
        public void vvod()
        {
            ftpoint.vvod();
            sdpoint.vvod();
            tdpoint.vvod();
        }
        public void vivod()
        {
            Console.Write($"Первая точка: ");
            ftpoint.vivod();
            Console.Write($" Вторая точка: ");
            sdpoint.vivod();
            Console.Write($" Третья точка: ");
            tdpoint.vivod();
            Console.WriteLine();
        }
        public double square()
        {
            return Math.Abs((sdpoint.getx() - ftpoint.getx()) * (tdpoint.gety() - ftpoint.gety()) - (tdpoint.getx() - ftpoint.getx()) * (sdpoint.gety() - ftpoint.gety())) / 2;
        }
        public double per()
        {
            return ftpoint.distance(sdpoint) + sdpoint.distance(tdpoint) + tdpoint.distance(ftpoint);
        }
    }
}
