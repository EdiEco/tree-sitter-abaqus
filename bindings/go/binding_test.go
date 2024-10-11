package tree_sitter_abaqus_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_abaqus "github.com/tree-sitter/tree-sitter-abaqus/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_abaqus.Language())
	if language == nil {
		t.Errorf("Error loading Abaqus grammar")
	}
}