// FUN_180493fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180493fd0 */

undefined1 (*) [16] FUN_180493fd0(undefined1 (*param_1) [16],byte *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  char local_30 [40];
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar8 = 1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_2[lVar5] != 0);
  FUN_1800f5540();
  bVar6 = *param_2;
  do {
    if (bVar6 == 0) {
      return param_1;
    }
    uVar2 = (uint)bVar6;
    if (bVar6 < 0x80) {
      iVar1 = tolower(uVar2);
      FUN_18015af80(param_1,iVar1);
LAB_18049404d:
      param_2 = param_2 + 1;
    }
    else {
      if ((bVar6 & 0xe0) == 0xc0) {
        uVar2 = uVar2 & 0x1f;
        iVar1 = 1;
      }
      else if ((bVar6 & 0xf0) == 0xe0) {
        uVar2 = uVar2 & 0xf;
        iVar1 = 2;
      }
      else {
        if ((bVar6 & 0xf8) != 0xf0) goto LAB_18049404d;
        uVar2 = uVar2 & 7;
        iVar1 = 3;
      }
      param_2 = param_2 + 1;
      iVar7 = 0;
      do {
        if ((*param_2 & 0xc0) != 0x80) break;
        uVar2 = *param_2 & 0x3f | uVar2 << 6;
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
      } while (iVar7 < iVar1);
      if ((uVar2 == 0x401) || (uVar2 == 0x451)) {
        cVar3 = '`';
LAB_1804941ac:
        FUN_18015af80(param_1,cVar3,iVar7,iVar1,uVar8);
      }
      else {
        uVar4 = uVar2 + 0x20;
        if (0x1f < uVar2 - 0x410) {
          uVar4 = uVar2;
        }
        uVar4 = uVar4 - 0x430;
        if (uVar4 < 0x20) {
          builtin_strncpy(local_30,"f,dult;pbqrkvyjghcnea[wxio]sm\'.z",0x21);
          if (((ulonglong)uVar4 < 0x20) && (cVar3 = local_30[uVar4], cVar3 != '\0'))
          goto LAB_1804941ac;
        }
        if (uVar2 < 0x80) {
          FUN_18015af80(param_1,uVar2 & 0xff,iVar7,iVar1,uVar8);
        }
        else {
          bVar6 = (byte)(uVar2 >> 6);
          if (uVar2 < 0x800) {
            bVar6 = bVar6 | 0xc0;
          }
          else {
            FUN_18015af80(param_1,(byte)(uVar2 >> 0xc) | 0xe0,iVar7,iVar1,uVar8);
            bVar6 = bVar6 & 0x3f | 0x80;
          }
          FUN_18015af80(param_1,bVar6);
          FUN_18015af80(param_1,(byte)uVar2 & 0x3f | 0x80);
        }
      }
    }
    bVar6 = *param_2;
  } while( true );
}



