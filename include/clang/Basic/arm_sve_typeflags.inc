#ifdef LLVM_GET_SVE_TYPEFLAGS
const uint64_t IsStructLoad = 131072;
const uint64_t FirstMergeTypeMask = 128;
const uint64_t IsZExtReturn = 524288;
const uint64_t IsStore = 16384;
const uint64_t NoFlags = 0;
const uint64_t IsStructStore = 262144;
const uint64_t FirstMemEltType = 16;
const uint64_t FirstEltType = 1;
const uint64_t MemEltTypeMask = 112;
const uint64_t EltTypeMask = 15;
const uint64_t IsGatherLoad = 32768;
const uint64_t IsLoad = 8192;
const uint64_t MergeTypeMask = 896;
const uint64_t IsScatterStore = 65536;
#endif

#ifdef LLVM_GET_SVE_ELTTYPES
  EltTyFloat64 = 7,
  EltTyBool32 = 10,
  EltTyInt16 = 2,
  EltTyBool16 = 9,
  EltTyBool8 = 8,
  EltTyInt64 = 4,
  EltTyBool64 = 11,
  EltTyInvalid = 0,
  EltTyInt8 = 1,
  EltTyInt32 = 3,
  EltTyFloat32 = 6,
  EltTyFloat16 = 5,
#endif

#ifdef LLVM_GET_SVE_MEMELTTYPES
  MemEltTyInt32 = 3,
  MemEltTyInt16 = 2,
  MemEltTyInt8 = 1,
  MemEltTyDefault = 0,
  MemEltTyInt64 = 4,
#endif

#ifdef LLVM_GET_SVE_MERGETYPES
  MergeNone = 0,
  MergeOp1 = 2,
  MergeZero = 3,
  MergeAnyExp = 4,
  MergeAny = 1,
  MergeZeroExp = 5,
#endif

#ifdef LLVM_GET_SVE_IMMCHECKTYPES
  ImmCheck0_31 = 0,
  ImmCheck1_16 = 1,
#endif

