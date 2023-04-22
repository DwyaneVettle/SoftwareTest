function OnOpenCB0 (connectionID,
				  accumulatedHeadersStr, accumulatedHeadersLen)
{
	
//		lr.outputMessage('WebSocket ID = ' + connectionID +' connected');
//		lr.saveParamRegexp({bufferToSearch : accumulatedHeadersStr,
//							  bufferSize : accumulatedHeadersLen,
//							  regExp : 'Sec-WebSocket-Accept: (.+)\\r\\n',
//							  resultParam : 'Accept'});
//		lr.outputMessage('Sec-WebSocket-Accept = ' + 
//						  lr.evalString("{Accept}"));

}

function OnMessageCB0 (connectionID,
				  isbinary,
				  data,
				  length)
{
	
//		if (isbinary) {
//			lr.outputMessage('WebSocket ID = ' + connectionID + '. ' + length +' bytes binary message received.');
//		}
//		else {
//			lr.outputMessage('WebSocket ID = ' + connectionID +'. ' + length +' bytes text message received.');
//		}
}

function OnErrorCB0 (connectionID,
				  message,
				  length)
{
	
//		lr.outputMessage('WebSocket ID = ' + connectionID + ' error occured. Error message = ' + message);
}

function OnCloseCB0 (connectionID,
				  isClosedByClient,
				  code,
				  reason,
				  length)
{
	
//		lr.outputMessage('WebSocket ID = ' + connectionID + ' closed. CloseCode = ' + code +', CloseReason = ' + reason);
}

