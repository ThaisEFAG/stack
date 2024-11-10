# Usa uma imagem base oficial com gcc instalado
FROM gcc:latest

# Define o diretório de trabalho dentro do contêiner
WORKDIR /app

# Copia os arquivos do projeto para o contêiner
COPY stack-test /app/stack-test

#Verifica se o arquivo stack.c foi copiado corretamente
RUN ls -l /app/stack-test

# Comando para compilar o código C
RUN gcc -o stack /app/stack-test/stack.c

# Comando para rodar o programa
CMD ["./stack"]
