chessTriangle = (n, m) => {
    M = Math.abs
    s = 0
    c = (y, x) => y > -1 & y < n & x > -1 & x < m & (x != rx || y != ry)
    f = (ky, kx, y = -1) => 
        // check Rook->Knight->Bishop->Rook
        c(ky, kx) &&
        [2, 1, -2, -1, -2, 1, 2, -1].map(x => {
            by = ky + y
            bx = kx + x
            s += c(by, bx) & M(by - ry) == M(bx - rx)
            y = x
        })
    
    for (ry = 0; ry < n; ry++) 
        for (rx = 0; rx < m; rx++) 
            [-3, -1, 1, 3].map(d => f(ry + d, rx) + f(ry, rx + d))

    return s * 2
}
