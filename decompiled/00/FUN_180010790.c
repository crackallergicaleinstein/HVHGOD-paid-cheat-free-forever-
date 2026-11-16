// FUN_180010790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180010790 */

ulonglong FUN_180010790(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [16];
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((ulonglong)param_2[2] < 0x11) {
    return 0;
  }
  plVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar5 = (longlong *)*param_2;
  }
  auVar7[0] = -((char)*plVar5 == 'H');
  auVar7[1] = -(*(char *)((longlong)plVar5 + 1) == 'V');
  auVar7[2] = -(*(char *)((longlong)plVar5 + 2) == 'H');
  auVar7[3] = -(*(char *)((longlong)plVar5 + 3) == 'G');
  auVar7[4] = -(*(char *)((longlong)plVar5 + 4) == 'O');
  auVar7[5] = -(*(char *)((longlong)plVar5 + 5) == 'D');
  auVar7[6] = -(*(char *)((longlong)plVar5 + 6) == '-');
  auVar7[7] = -(*(char *)((longlong)plVar5 + 7) == 'B');
  auVar7[8] = -((char)plVar5[1] == 'R');
  auVar7[9] = -(*(char *)((longlong)plVar5 + 9) == 'I');
  auVar7[10] = -(*(char *)((longlong)plVar5 + 10) == 'D');
  auVar7[0xb] = -(*(char *)((longlong)plVar5 + 0xb) == 'G');
  auVar7[0xc] = -(*(char *)((longlong)plVar5 + 0xc) == 'E');
  auVar7[0xd] = -(*(char *)((longlong)plVar5 + 0xd) == '-');
  auVar7[0xe] = -(*(char *)((longlong)plVar5 + 0xe) == 'V');
  auVar7[0xf] = -(*(char *)((longlong)plVar5 + 0xf) == '2');
  auVar8[0] = -((char)plVar5[2] == '\n');
  auVar8[1] = 0xff;
  auVar8[2] = 0xff;
  auVar8[3] = 0xff;
  auVar8[4] = 0xff;
  auVar8[5] = 0xff;
  auVar8[6] = 0xff;
  auVar8[7] = 0xff;
  auVar8[8] = 0xff;
  auVar8[9] = 0xff;
  auVar8[10] = 0xff;
  auVar8[0xb] = 0xff;
  auVar8[0xc] = 0xff;
  auVar8[0xd] = 0xff;
  auVar8[0xe] = 0xff;
  auVar8[0xf] = 0xff;
  auVar8 = auVar8 & auVar7;
  if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) != 0xffff) {
    return 0;
  }
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_60 = param_2[2] - 0x11;
  local_68 = (longlong)plVar5 + 0x11;
  cVar1 = FUN_180010a30(&local_68,local_38,0x20000001);
  if (cVar1 == '\0') {
    uVar2 = 0;
    lVar3 = local_38._0_8_;
  }
  else {
    local_58 = (undefined1  [16])0x0;
    local_48 = 0;
    uStack_40 = 0xf;
    local_88 = (undefined1  [16])0x0;
    local_78 = *param_1;
    uStack_70 = param_1[1];
    uVar2 = FUN_180010410(0,&local_78,local_38,local_58,local_88);
    if ((char)uVar2 == '\x01' && param_2 != (longlong *)local_58) {
      uVar4 = param_2[3];
      if (0xf < uVar4) {
        lVar3 = *param_2;
        uVar6 = uVar4 + 1;
        if (0xfff < uVar6) {
          if (0x1f < (ulonglong)((lVar3 + -8) - *(longlong *)(lVar3 + -8))) goto LAB_1800109b2;
          uVar6 = uVar4 + 0x28;
          lVar3 = *(longlong *)(lVar3 + -8);
        }
        uVar2 = uVar2 & 0xffffffff;
        FUN_1804547d0(lVar3,uVar6);
      }
      param_2[2] = local_48;
      param_2[3] = uStack_40;
      *param_2 = local_58._0_8_;
      param_2[1] = local_58._8_8_;
    }
    else if (0xf < uStack_40) {
      uVar4 = uStack_40 + 1;
      if (uVar4 < 0x1000) {
        lVar3 = local_58._0_8_;
      }
      else {
        if (0x1f < (ulonglong)((local_58._0_8_ + -8) - *(longlong *)(local_58._0_8_ + -8)))
        goto LAB_1800109b2;
        uVar4 = uStack_40 + 0x28;
        lVar3 = *(longlong *)(local_58._0_8_ + -8);
      }
      uVar2 = uVar2 & 0xffffffff;
      FUN_1804547d0(lVar3,uVar4);
      lVar3 = local_38._0_8_;
      goto joined_r0x0001800109ab;
    }
    lVar3 = local_38._0_8_;
  }
joined_r0x0001800109ab:
  if (lVar3 == 0) {
    return uVar2;
  }
  uVar4 = local_28 - lVar3;
  if (0xfff < uVar4) {
    if (0x1f < (ulonglong)((lVar3 + -8) - *(longlong *)(lVar3 + -8))) {
LAB_1800109b2:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar4 = uVar4 + 0x27;
    lVar3 = *(longlong *)(lVar3 + -8);
  }
  FUN_1804547d0(lVar3,uVar4);
  return uVar2 & 0xffffffff;
}



