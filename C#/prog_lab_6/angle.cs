using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class angle
    {
        private point ftpoint, verpoint, sdpoint;
        public angle()
        {
            ftpoint = new point();
            verpoint = new point();
            sdpoint = new point();
        }
        public void vvod()
        {
            ftpoint.vvod();
            verpoint.vvod();
            sdpoint.vvod();
        }
        public void vivod()
        {
            Console.Write($"Первая точка угла: ");
            ftpoint.vivod();
            Console.Write($" Вершина точка угла: ");
            verpoint.vivod();
            Console.Write($" Вторая точка угла: ");
            sdpoint.vivod();
            Console.WriteLine();
        }
        public double value()
        {
            return Math.Acos(((ftpoint.getx() - verpoint.getx()) * (sdpoint.getx() - verpoint.getx()) + (ftpoint.gety() - verpoint.gety()) * (sdpoint.gety() - verpoint.gety())) / ftpoint.distance(verpoint) / sdpoint.distance(verpoint)) / Math.PI * 180;
        }
    }
}