          }

            favoriteColors[name] = color;
              res.send(`Favorite color for ${name} saved as ${color}`);
              });

              // GET /color/:name
              app.get("/color/:name", (req: Request, res: Response) => {
                const { name } = req.params;
                  const color = favoriteColors[name];

                    if (color) {
                        res.send(`${name}'s favorite color is ${color}`);
                          } else {
        return res.status(400).send("Both name and color are required");
    if (!name || !color) {

  const { name, color } = req.body;
app.post("/color", (req: Request, res: Response) => {
// POST /color

const favoriteColors: { [key: string]: string } = {};
// In-memory storage with type annotation

app.use(express.json());

const port = 8080;
const app = express();

import express from "express";
import type { Request, Response } from "express";