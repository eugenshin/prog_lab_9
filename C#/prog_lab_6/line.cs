using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class line
    {
        private point ftpoint, sdpoint;
        public line()
        {
            ftpoint = new point();
            sdpoint = new point();
        }
        public void vvod()
        {
            ftpoint.vvod();
            sdpoint.vvod();
        }
        public void vivod()
        {
            Console.Write($"Координаты первой точки: ");
            ftpoint.vivod();
            Console.WriteLine();
            Console.Write($"Координаты второй точки: ");
            sdpoint.vivod();
            Console.WriteLine();
        }
        public double length()
        {
            return ftpoint.distance(sdpoint);
        }
    }
}
