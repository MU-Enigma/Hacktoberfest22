import logo from "./logo.svg";
import "./App.css";
import TicTacToe from "./TicTacToe/TicTacToe";
import { useState } from "react";

function App() {
    return (
        <div>
            <div className="App">
                <TicTacToe char_x={"α"} char_o={"β"} />
            </div>
        </div>
    );
}

export default App;
