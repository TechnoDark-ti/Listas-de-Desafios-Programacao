-- lua 5.4
--
-- @author Márcio Moda
-- this code is GPL v.3
--

tarefas = {}
id_counter = 1

function adicionar(titulo)
    table.insert(tarefas, {id = id_counter, titulo = titulo, concluida = false})
    id_counter = id_counter + 1
end

function listar()
    for _, t in ipairs(tarefas) do
        local status = t.concluida and "[X]" or "[ ]"
        print(t.id .. " " .. status .. " " .. t.titulo)
    end
end

function concluir(id)
    for _, t in ipairs(tarefas) do
        if t.id == id then
            t.concluida = true
        end
    end
end

function remover(id)
    for i, t in ipairs(tarefas) do
        if t.id == id then
            table.remove(tarefas, i)
            return
        end
    end
end

-- Loop interativo
while true do
    print("\n1. Adicionar | 2. Listar | 3. Concluir | 4. Remover | 5. Sair")
    io.write("Escolha: ")
    local opcao = tonumber(io.read())

    if opcao == 1 then
        io.write("Digite o título: ")
        adicionar(io.read())
    elseif opcao == 2 then
        listar()
    elseif opcao == 3 then
        io.write("Digite o ID: ")
        concluir(tonumber(io.read()))
    elseif opcao == 4 then
        io.write("Digite o ID: ")
        remover(tonumber(io.read()))
    elseif opcao == 5 then
        break
    end
end

