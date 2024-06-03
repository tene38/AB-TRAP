


    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

static const EmlTreesNode scan_nodes[72] = {
  { 2, 64.500000f, 1, 71 },
  { 6, 0.500000f, 1, 61 },
  { 5, 38.000000f, 1, 50 },
  { 1, 0.500000f, 1, 25 },
  { 7, 0.500000f, 1, 12 },
  { 2, 40.500000f, 1, 10 },
  { 13, 506.500000f, -1, 1 },
  { 13, 1300.000000f, 1, 7 },
  { 13, 1024.500000f, 1, 4 },
  { 0, 58934.500000f, 1, 2 },
  { 0, 20091.500000f, -2, -2 },
  { 0, 58937.000000f, -1, -2 },
  { 8, 0.500000f, -1, 1 },
  { 3, 4.000000f, -2, -1 },
  { 0, 1097.500000f, -1, -1 },
  { 2, 41.500000f, -1, -1 },
  { 13, 520.500000f, 1, 2 },
  { 13, 506.500000f, -1, -2 },
  { 13, 65524.000000f, 1, 8 },
  { 5, 22.000000f, 1, 4 },
  { 13, 1064.000000f, 1, -1 },
  { 3, 2.000000f, 1, -1 },
  { 0, 60742.000000f, -1, -1 },
  { 13, 1026.000000f, 1, -1 },
  { 3, 4.000000f, 1, -1 },
  { 13, 933.000000f, -1, -2 },
  { 3, 4.000000f, 1, -1 },
  { 5, 22.000000f, -2, -1 },
  { 13, 0.500000f, 1, 13 },
  { 0, 59.500000f, 1, 5 },
  { 10, 0.500000f, 1, 3 },
  { 3, 1.000000f, -2, 1 },
  { 3, 5.000000f, -1, -1 },
  { 8, 0.500000f, -1, -1 },
  { 0, 38766.500000f, -1, 1 },
  { 0, 38841.000000f, -2, 1 },
  { 0, 41467.000000f, 1, 2 },
  { 0, 41284.000000f, -1, -2 },
  { 0, 60709.500000f, 1, 2 },
  { 0, 41581.000000f, -1, -1 },
  { 0, 60827.000000f, -2, -1 },
  { 4, 18.500000f, 1, 9 },
  { 13, 28944.000000f, -1, 1 },
  { 13, 29008.000000f, 1, 3 },
  { 0, 26421.000000f, 1, -2 },
  { 0, 8553.000000f, -1, -1 },
  { 8, 0.500000f, 1, 3 },
  { 0, 51143.000000f, -1, 1 },
  { 0, 51161.000000f, -2, -1 },
  { 5, 26.000000f, -1, -2 },
  { 13, 21780.000000f, -1, 1 },
  { 13, 46454.000000f, -2, -1 },
  { 13, 15749.000000f, -1, 1 },
  { 13, 64520.000000f, 1, 8 },
  { 0, 11.000000f, -1, 1 },
  { 13, 16472.000000f, 1, 2 },
  { 2, 62.000000f, -1, -2 },
  { 13, 64157.000000f, -1, 1 },
  { 0, 55526.500000f, 1, -2 },
  { 0, 55379.500000f, 1, -2 },
  { 0, 50700.000000f, -2, -2 },
  { 10, 0.500000f, -1, -1 },
  { 13, 511.500000f, -1, 1 },
  { 0, 2.000000f, -1, 1 },
  { 13, 16498.000000f, 1, -1 },
  { 3, 4.000000f, 1, -1 },
  { 10, 0.500000f, -2, 1 },
  { 13, 1023.500000f, -1, 1 },
  { 7, 0.500000f, 1, -2 },
  { 13, 1024.500000f, 1, -1 },
  { 1, 0.500000f, -2, -1 },
  { 6, 0.500000f, -1, -1 } 
};

static const int32_t scan_tree_roots[1] = { 0 };

static const uint8_t scan_leaves[2] = { 0, 1 };

EmlTrees scan = {
        72,
        (EmlTreesNode *)(scan_nodes),	  
        1,
        (int32_t *)(scan_tree_roots),
        2,
        (uint8_t *)(scan_leaves),
        0,
        15,
        2,
    };

static inline int32_t scan_tree_0(const float *features, int32_t features_length) {
          if (features[2] < 64.500000f) {
              if (features[6] < 0.500000f) {
                  if (features[5] < 38.000000f) {
                      if (features[1] < 0.500000f) {
                          if (features[7] < 0.500000f) {
                              if (features[2] < 40.500000f) {
                                  if (features[13] < 506.500000f) {
                                      return 0;
                                  } else {
                                      if (features[13] < 1300.000000f) {
                                          if (features[13] < 1024.500000f) {
                                              if (features[0] < 58934.500000f) {
                                                  if (features[0] < 20091.500000f) {
                                                      return 1;
                                                  } else {
                                                      return 1;
                                                  }
                                              } else {
                                                  if (features[0] < 58937.000000f) {
                                                      return 0;
                                                  } else {
                                                      return 1;
                                                  }
                                              }
                                          } else {
                                              if (features[8] < 0.500000f) {
                                                  return 0;
                                              } else {
                                                  if (features[3] < 4.000000f) {
                                                      return 1;
                                                  } else {
                                                      return 0;
                                                  }
                                              }
                                          }
                                      } else {
                                          if (features[0] < 1097.500000f) {
                                              return 0;
                                          } else {
                                              return 0;
                                          }
                                      }
                                  }
                              } else {
                                  if (features[2] < 41.500000f) {
                                      return 0;
                                  } else {
                                      return 0;
                                  }
                              }
                          } else {
                              if (features[13] < 520.500000f) {
                                  if (features[13] < 506.500000f) {
                                      return 0;
                                  } else {
                                      return 1;
                                  }
                              } else {
                                  if (features[13] < 65524.000000f) {
                                      if (features[5] < 22.000000f) {
                                          if (features[13] < 1064.000000f) {
                                              if (features[3] < 2.000000f) {
                                                  if (features[0] < 60742.000000f) {
                                                      return 0;
                                                  } else {
                                                      return 0;
                                                  }
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          if (features[13] < 1026.000000f) {
                                              if (features[3] < 4.000000f) {
                                                  if (features[13] < 933.000000f) {
                                                      return 0;
                                                  } else {
                                                      return 1;
                                                  }
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  } else {
                                      if (features[3] < 4.000000f) {
                                          if (features[5] < 22.000000f) {
                                              return 1;
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[13] < 0.500000f) {
                              if (features[0] < 59.500000f) {
                                  if (features[10] < 0.500000f) {
                                      if (features[3] < 1.000000f) {
                                          return 1;
                                      } else {
                                          if (features[3] < 5.000000f) {
                                              return 0;
                                          } else {
                                              return 0;
                                          }
                                      }
                                  } else {
                                      if (features[8] < 0.500000f) {
                                          return 0;
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  if (features[0] < 38766.500000f) {
                                      return 0;
                                  } else {
                                      if (features[0] < 38841.000000f) {
                                          return 1;
                                      } else {
                                          if (features[0] < 41467.000000f) {
                                              if (features[0] < 41284.000000f) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          } else {
                                              if (features[0] < 60709.500000f) {
                                                  if (features[0] < 41581.000000f) {
                                                      return 0;
                                                  } else {
                                                      return 0;
                                                  }
                                              } else {
                                                  if (features[0] < 60827.000000f) {
                                                      return 1;
                                                  } else {
                                                      return 0;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          } else {
                              if (features[4] < 18.500000f) {
                                  if (features[13] < 28944.000000f) {
                                      return 0;
                                  } else {
                                      if (features[13] < 29008.000000f) {
                                          if (features[0] < 26421.000000f) {
                                              if (features[0] < 8553.000000f) {
                                                  return 0;
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 1;
                                          }
                                      } else {
                                          if (features[8] < 0.500000f) {
                                              if (features[0] < 51143.000000f) {
                                                  return 0;
                                              } else {
                                                  if (features[0] < 51161.000000f) {
                                                      return 1;
                                                  } else {
                                                      return 0;
                                                  }
                                              }
                                          } else {
                                              if (features[5] < 26.000000f) {
                                                  return 0;
                                              } else {
                                                  return 1;
                                              }
                                          }
                                      }
                                  }
                              } else {
                                  if (features[13] < 21780.000000f) {
                                      return 0;
                                  } else {
                                      if (features[13] < 46454.000000f) {
                                          return 1;
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[13] < 15749.000000f) {
                          return 0;
                      } else {
                          if (features[13] < 64520.000000f) {
                              if (features[0] < 11.000000f) {
                                  return 0;
                              } else {
                                  if (features[13] < 16472.000000f) {
                                      if (features[2] < 62.000000f) {
                                          return 0;
                                      } else {
                                          return 1;
                                      }
                                  } else {
                                      if (features[13] < 64157.000000f) {
                                          return 0;
                                      } else {
                                          if (features[0] < 55526.500000f) {
                                              if (features[0] < 55379.500000f) {
                                                  if (features[0] < 50700.000000f) {
                                                      return 1;
                                                  } else {
                                                      return 1;
                                                  }
                                              } else {
                                                  return 1;
                                              }
                                          } else {
                                              return 1;
                                          }
                                      }
                                  }
                              }
                          } else {
                              if (features[10] < 0.500000f) {
                                  return 0;
                              } else {
                                  return 0;
                              }
                          }
                      }
                  }
              } else {
                  if (features[13] < 511.500000f) {
                      return 0;
                  } else {
                      if (features[0] < 2.000000f) {
                          return 0;
                      } else {
                          if (features[13] < 16498.000000f) {
                              if (features[3] < 4.000000f) {
                                  if (features[10] < 0.500000f) {
                                      return 1;
                                  } else {
                                      if (features[13] < 1023.500000f) {
                                          return 0;
                                      } else {
                                          if (features[7] < 0.500000f) {
                                              if (features[13] < 1024.500000f) {
                                                  if (features[1] < 0.500000f) {
                                                      return 1;
                                                  } else {
                                                      return 0;
                                                  }
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 1;
                                          }
                                      }
                                  }
                              } else {
                                  return 0;
                              }
                          } else {
                              return 0;
                          }
                      }
                  }
              }
          } else {
              if (features[6] < 0.500000f) {
                  return 0;
              } else {
                  return 0;
              }
          }
        }
        

int32_t scan_predict(const float *features, int32_t features_length) {

        int32_t votes[2] = {0,};
        int32_t _class = -1;

        _class = scan_tree_0(features, features_length); votes[_class] += 1;
    
        int32_t most_voted_class = -1;
        int32_t most_voted_votes = 0;
        for (int32_t i=0; i<2; i++) {

            if (votes[i] > most_voted_votes) {
                most_voted_class = i;
                most_voted_votes = votes[i];
            }
        }
        return most_voted_class;
    }
    