
echo "Running correct files: "
for file in ./test/correct/* ; do
	./etapa2 < "$file"
	echo ""
done

echo "Running incorrect files: "
for file in ./test/wrong/* ; do
	./etapa2 < "$file"
	echo ""
done


