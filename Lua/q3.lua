--[[
1. Crie uma classe para representar um jogador de futebol, com os
atributos nome, posição, data de nascimento, nacionalidade, altura e peso.
Crie os métodos públicos necessários para sets e gets e também um método
para imprimir todos os dados do jogador. Crie um método para calcular a
idade do jogador e outro método para mostrar quanto tempo falta para o
jogador se aposentar. Para isso, considere que os jogadores da posição de
defesa se aposentam em média aos 40 anos, os jogadores de meio-campo
aos 38 e os atacantes aos 35.]]--

--[[
@Author: Márcio Moda & Grazi Leão
Data: 07/09/2025

This code is licensed GPL v.3
]]--

-- lua 5.4

-- Definindo o objeto Jogador através de uma tabela
Jogador = {
    nome = "", 
    posicao = "", 
    dataNascimento = "",
    nacionalidade = "",
    altura = 0,
    peso = 0
}
--Construtor
function Jogador:novo(nome, posicao, dataNascimento, nacionalidade, altura, peso)
    local obj = {} -- variável para receber os parâmetros da classe
    setmetatable(obj, self) -- Revisar
    self.__index = self -- Revisar

    obj.nome = nome
    obj.posicao = posicao
    obj.dataNascimento = dataNascimento
    obj.nacionalidade = nacionalidade
    obj.altura = altura
    obj.peso = peso

    return obj
end
-- getters e setters
function Jogador:setNome(nome) self.nome = nome end
function Jogador:getNome() return self.nome end

function Jogador:getPosicao() return self.posicao end
function Jogador:setPosicao(posicao) self.posicao = posicao end

function Jogador:getDataNascimento() return self.dataNascimento end
function Jogador:setDatanascimento(dataNascimento) self.dataNascimento = dataNascimento end

function Jogador:getNacionalidade() return self.nacionalidade end
function Jogador:setNacionalidade(nacionalidade) self.nacionalidade = nacionalidade end

function Jogador:getAltura() return self.altura end
function Jogador:setAltura(altura) self.altura = altura end

function Jogador:getPeso() return self.peso end
function Jogador:setPeso() self.peso = peso end

-- calcular idade
function Jogador:calcularIdade()
    local anodeNascimento = tonumber(self.dataNascimento:sub(1,4))
    local anoAtual = os.date("*t").year
    return anoAtual - anodeNascimento
end

-- calular aposentadoria
function Jogador:tempoAposentadoria()
    local idade = self:calcularIdade()
    local idadeAposentadoria = 0
    local pos = self.posicao:lower()

    if pos == "defesa" then
        idadeAposentadoria = 40
    elseif pos == "meio-campo" or pos == "meio campo" then
        idadeAposentadoria = 38
    elseif pos == "atacante" then
        idadeAposentadoria = 35
    else
        print("Erro de saída: posição inválida")
        idadeAposentadoria = 38
    end

    local falta = idadeAposentadoria - idade
    if falta < 0 then falta = 0 end
    return falta
end
-- to string
function Jogador:toString()
    print("Nome: " .. self.nome)
    print("Posição: " .. self.posicao)
    print("Data de Nascimento: " .. self.dataNascimento)
    print("Nacionalidade: " .. self.nacionalidade)
    print("Altura: " .. self.altura)
    print("Peso: " .. self.peso)
    print("Idade: " .. self:calcularIdade() .. " anos")
    print("Tipo de aposentadoria: " .. self:tempoAposentadoria() .. " anos")
end

-- teste
local jogador1 = Jogador:novo("Neymay", "atacante", "1992-02-05", "Brasil", 1.75, 68)
jogador1:toString()