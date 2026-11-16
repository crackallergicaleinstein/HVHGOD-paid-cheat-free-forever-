// FUN_180176d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176d20 */

longlong * FUN_180176d20(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *param_1 = (longlong)&DAT_180701b70;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x12] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  plVar1 = param_1 + 2;
  FUN_180151d10((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,plVar1,0);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  FUN_180151be0(plVar1);
  *plVar1 = (longlong)
            std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  lVar2 = param_2[2];
  if ((ulonglong)param_2[3] < 0x10) {
    iVar5 = 0x11;
    puVar4 = (undefined8 *)FUN_18015bca0(0x11);
    uVar3 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar3;
  }
  else {
    puVar4 = (undefined8 *)*param_2;
    iVar5 = (int)param_2[3] + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_1[0xf] = (longlong)puVar4 + lVar2;
  *(undefined8 **)param_1[6] = puVar4;
  *(undefined8 **)param_1[10] = puVar4;
  *(int *)param_1[0xd] = iVar5;
  lVar2 = param_1[0xf];
  *(undefined8 **)param_1[5] = puVar4;
  *(undefined8 **)param_1[9] = puVar4;
  *(int *)param_1[0xc] = (int)lVar2 - (int)puVar4;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  return param_1;
}



