-- distancia entre dos puntos
distancia (x1, y1) (x2, y2) = sqrt((x1 - x2)^2 + (y1 - y2)^2)

-- sumaComplejos (2,3) (5,6)  ==  (7,9)
sumaComplejos (a, b) (c, d) = (a + c, b + d)

--    productoComplejos (2,3) (5,6)  ==  (-8, 27)
productoComplejos (a,b) (c,d) = (a*c-b*d, a*d+b*c)

-- raices reales de la ecuación  ax^2 + bx + c = 0. 
--    raices 1 (-2) 1 == [1.0,1.0]
--    raices 1 3 2    == [-1.0,-2.0]

raices_2 a b c
    | d >= 0    = [(-b+e)/(2*a), (-b-e)/(2*a)]
    | otherwise = error "No tiene raices reales"
    where d = b^2-4*a*c
          e = sqrt d
