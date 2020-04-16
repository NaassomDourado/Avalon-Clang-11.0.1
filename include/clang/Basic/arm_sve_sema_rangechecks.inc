#ifdef GET_SVE_IMMEDIATE_CHECK
case SVE::BI__builtin_sve_svqdech_pat_s16:
ImmChecks.push_back(std::make_tuple(2, 1, 0));
ImmChecks.push_back(std::make_tuple(1, 0, 0));
  break;
case SVE::BI__builtin_sve_svqdech_pat_u16:
ImmChecks.push_back(std::make_tuple(2, 1, 0));
ImmChecks.push_back(std::make_tuple(1, 0, 0));
  break;
#endif

