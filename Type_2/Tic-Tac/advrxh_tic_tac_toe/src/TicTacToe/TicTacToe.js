import React, { useState } from "react";
import "./TicTacToe.css";

const TicTacToe = ({ char_x, char_o }) => {
    const [turn, setTurn] = useState(char_x);
    const [cells, setCells] = useState(Array(9).fill(""));
    const [winner, setWinner] = useState();

    const checkForWinner = (squares) => {
        let combos = {
            across: [
                [0, 1, 2],
                [3, 4, 5],
                [6, 7, 8],
            ],
            down: [
                [0, 3, 6],
                [1, 4, 7],
                [2, 5, 8],
            ],
            diagnol: [
                [0, 4, 8],
                [2, 4, 6],
            ],
        };

        for (let combo in combos) {
            combos[combo].forEach((pattern) => {
                if (
                    squares[pattern[0]] === "" ||
                    squares[pattern[1]] === "" ||
                    squares[pattern[2]] === ""
                ) {
                    // do nothing
                } else if (
                    squares[pattern[0]] === squares[pattern[1]] &&
                    squares[pattern[1]] === squares[pattern[2]]
                ) {
                    setWinner(squares[pattern[0]]);
                }
            });
        }
    };

    const handleClick = (num) => {
        if (cells[num] !== "") {
            alert("already clicked");
            return;
        }

        let squares = [...cells];

        if (turn === char_x) {
            squares[num] = char_x;
            setTurn(char_o);
        } else {
            squares[num] = char_o;
            setTurn(char_x);
        }

        checkForWinner(squares);
        setCells(squares);
    };

    const handleRestart = () => {
        setWinner(null);
        setCells(Array(9).fill(""));
    };

    const Cell = ({ num }) => {
        return <td onClick={() => handleClick(num)}>{cells[num]}</td>;
    };

    return (
        <div className="container">
            <div className="nest">
                <table>
                    <p>
                        TURN: <b>{turn}</b>
                    </p>
                    <tbody>
                        <tr>
                            <Cell num={0} />
                            <Cell num={1} />
                            <Cell num={2} />
                        </tr>
                        <tr>
                            <Cell num={3} />
                            <Cell num={4} />
                            <Cell num={5} />
                        </tr>
                        <tr>
                            <Cell num={6} />
                            <Cell num={7} />
                            <Cell num={8} />
                        </tr>
                    </tbody>
                </table>
            </div>
            {winner && (
                <div className="tool-bar">
                    <p>
                        <b>{winner}</b> is the winner!
                    </p>
                    <button onClick={() => handleRestart()}>
                        <b>PLAY AGAIN ⏪</b>
                    </button>
                </div>
            )}
        </div>
    );
};

export default TicTacToe;
