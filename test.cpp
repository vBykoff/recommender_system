#include "gtest/gtest.h"
#include "../source/RecSys.h"

//NET
TEST(Net, save_load) {
  //saving and loading net
  auto nn = std::make_shared<Net>(5, 5);
  //save net's tensor
  torch::Tensor docs = nn->documents_embeddings;
  torch::Tensor cards = nn->flashcards_embedding;

  save_model(nn);
  load_model(nn);

  //checking tensor's equality
  EXPECT_EQ(docs, nn->documents_embeddings);
  EXPECT_EQ(cards, nn->flashcards_embedding);
}

TEST(Net, train) {
  //trainning net
}

//RECOMMENDER SYSTEM
TEST(RecSys, fit) {
  //fit
}

TEST(RecSys, evaluate) {
  //evaluate
}

TEST(RecSys, eval_loss) {

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}