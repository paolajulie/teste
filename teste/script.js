function inverterString(str) {
    // Verifica se a string é válida
    if (typeof str !== 'string') {
        console.log("Por favor, forneça uma string válida.");
        return;
    }

    let invertedString = ''; // Inicializa uma string vazia para armazenar a string invertida
    
    // Percorre a string original de trás para frente e adiciona cada caractere à nova string
    for (let i = str.length - 1; i >= 0; i--) {
        invertedString += str[i];
    }
    
    return invertedString; // Retorna a string invertida
}

// Solicita ao usuário que insira uma string
const inputString = prompt("Digite uma string para inverter:");

// Inverte a string fornecida pelo usuário
const stringInvertida = inverterString(inputString);

// Exibe a string original e a string invertida no console
console.log(`String Original: ${inputString}`);
console.log(`String Invertida: ${stringInvertida}`);
