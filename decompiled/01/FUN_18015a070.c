// FUN_18015a070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a070 */

void FUN_18015a070(_Locinfo *param_1)

{
  std::_Locinfo::_Locinfo_dtor(param_1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_180621380();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_180621380();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_180621380();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_180621380();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_180621380();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_180621380();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  std::_Lockit::~_Lockit((_Lockit *)param_1);
  return;
}



